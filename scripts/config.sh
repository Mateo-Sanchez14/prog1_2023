#!/bin/bash

# Dar permiso de ejecucion a este script
# sudo chmod 777 config.sh

# Cambiar hostname

# HOSTNAME_OLD=GABINETE
# HOSTNAME_NEW=PC01
# hostnamectl set-hostname $HOSTNAME_NEW
# sed -i -e "s/$HOSTNAME_OLD/$HOSTNAME_NEW/g" /etc/hosts

# Si da problemas al instalar con apt

# sudo fuser -vki /var/lib/dpkg/lock
# sudo fuser -vki /var/lib/dpkg/lock-frontend
# sudo dpkg --configure -a
# sudo apt autoremove

# Configurar proxy para apt

# echo "###############################################"
# echo "--> Configurar proxy para apt"
# echo "###############################################"

# sudo /bin/cat << EOM > /etc/apt/apt.conf
# Acquire::http::Proxy "http://GABINETE:x3200M2@192.168.0.100:80";
# Acquire::https::Proxy "https://GABINETE:x3200M2@192.168.0.100:80";
# EOM

# Instalar software necesario

echo "###############################################"
echo "--> Instalando software necesario"
echo "###############################################"

sudo apt install -y \
                build-essential \
                linux-headers-$(uname -r) \
                dkms \
                tree \
                git \
                curl

# Crear carpeta temporal para archivos

mkdir /home/gabinete/temp
cd /home/gabinete/temp

# Instalar VSCode

echo "###############################################"
echo "--> Instalando VSCode"
echo "###############################################"

sudo apt install software-properties-common apt-transport-https wget
wget -q https://packages.microsoft.com/keys/microsoft.asc -O- | sudo apt-key add -
sudo add-apt-repository "deb [arch=amd64] https://packages.microsoft.com/repos/vscode stable main"
sudo apt update
sudo apt install -y code

# Instalar MySQL

echo "###############################################"
echo "--> Instalando MySQL"
echo "###############################################"

sudo apt update
sudo apt install -y mysql-server-8.0
wget https://downloads.mysql.com/archives/get/p/8/file/mysql-workbench-community_8.0.32-1ubuntu22.04_amd64.deb
sudo apt install -y ./mysql-workbench-community_8.0.32-1ubuntu22.04_amd64.deb

# Instalar Netbeans

echo "###############################################"
echo "--> Instalando Netbeans"
echo "###############################################"

sudo apt install -y default-jre openjdk-17-jdk
sudo snap install netbeans --classic

# Instalar SmartGit

echo "###############################################"
echo "--> Instalando SmartGit"
echo "###############################################"

wget https://www.syntevo.com/downloads/smartgit/smartgit-linux-22_1_5.tar.gz
tar -xvzf smartgit-linux*.tar.gz
smartgit/bin/smartgit.sh
smartgit/bin/add-menuitem.sh
# smartgit/bin/remove-menuitem.sh

# Instalar Virtualbox

echo "###############################################"
echo "--> Instalando Netbeans"
echo "###############################################"

sudo apt install -y virtualbox

# Limpiar archivos temporales

cd /home/gabinete
rm -r temp
