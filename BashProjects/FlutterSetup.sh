###https://dev.to/awais/configure-flutter-development-environment-on-manjaro-arch-linux-4a0a
export JAVA_HOME='/usr/lib/jvm/java-8-openjdk'
export PATH=$JAVA_HOME/bin:$PATH 

sudo groupadd flutterusers
sudo gpasswd -a $USER flutterusers
sudo chown -R :flutterusers /opt/flutter
sudo chmod -R g+w /opt/flutter/

sudo groupadd android-sdk
sudo gpasswd -a $USER android-sdk
sudo setfacl -R -m g:android-sdk:rwx /opt/android-sdk
sudo setfacl -d -m g:android-sdk:rwX /opt/android-sdk

sdkmanager --install "system-images;android-29;default;x86"
avdmanager create avd -n <name> -k "system-images;android-29;default;x86"

#export ANDROID_SDK_ROOT='/opt/android-sdk'
#export PATH=$PATH:$ANDROID_SDK_ROOT/platform-tools/
#export PATH=$PATH:$ANDROID_SDK_ROOT/tools/bin/
#export PATH=$PATH:$ANDROID_ROOT/emulator
#export PATH=$PATH:$ANDROID_SDK_ROOT/tools/