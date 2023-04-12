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

# sudo /bin/cat << EOM > /etc/apt/apt.conf
# Acquire::http::Proxy "http://GABINETE:x3200M2@192.168.0.100:80";
# Acquire::https::Proxy "https://GABINETE:x3200M2@192.168.0.100:80";
# EOM`

# Instalar software necesario

sudo apt install -y \
                build-essential \
                linux-headers-$(uname -r) \
                dkms \
                tree \
                git \
                curl

# Crear carpeta temporal para archivos

mkdir /home/$(whoami)/temp
cd /home/$(whoami)/temp

# Instalar Virtualbox

# sudo apt install -y virtualbox

# Instalar Netbeans

# sudo apt install -y default-jre openjdk-17-jdk
# sudo snap install netbeans --classic

# Instalar VSCode

# sudo apt install software-properties-common apt-transport-https wget
# wget -q https://packages.microsoft.com/keys/microsoft.asc -O- | sudo apt-key add -
# sudo add-apt-repository "deb [arch=amd64] https://packages.microsoft.com/repos/vscode stable main"
# sudo apt update && apt install -y code

# Instalar SmartGit

# wget https://www.syntevo.com/downloads/smartgit/smartgit-linux-22_1_5.tar.gz
# tar -xvzf smartgit-linux*.tar.gz
# smartgit/bin/smartgit.sh
# smartgit/bin/add-menuitem.sh
# smartgit/bin/remove-menuitem.sh
