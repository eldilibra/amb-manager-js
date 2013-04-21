#Copy this file to /etc/profile.d/alma.sh and source it
# User specific aliases and functions
source /alma/ACS-10.2/ACSSW/config/.acs/.bash_profile.acs

#ACE_ROOT is being set by .bash_profile.acs already
#export ACE_ROOT=/alma/ACS-10.2/TAO/ACE_wrappers/build/linux
export TAO_ROOT=$ACE_ROOT/TAO
export LD_LIBRARY_PATH=/home/dev/CURRENTLY_MOD/StandaloneAmbManager/lib:$LD_LIBRARY_PATH
export CPLUS_INCLUDE_PATH=$ACE_ROOT/ace:$TAO_ROOT/tao:/alma/ACS-10.2/ACSSW/include:$TAO_ROOT/tao/IORTable:$TAO_ROOT/tao/IFR_Client:$TAO_ROOT/tao/PortableServer:$TAO_ROOT/tao/SmartProxies:$TAO_ROOT/tao/DynamicAny:$TAO_ROOT/tao/DynamicInterface:$TAO_ROOT/tao/Messaging:$TAO_ROOT/tao/Valuetype:$TAO_ROOT/orbsvcs/orbsvcs:$TAO_ROOT/orbsvcs:$TAO_ROOT/orbsvcs/orbsvcs/Log
