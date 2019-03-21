#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UOnlineSubsystemCommonImpl()
{
    class_< UOnlineSubsystemCommonImpl, bases< UOnlineSubsystem >  , boost::noncopyable>("UOnlineSubsystemCommonImpl", no_init)
        .def_readwrite("VoiceEngine", &UOnlineSubsystemCommonImpl::VoiceEngine)
        .def_readwrite("MaxLocalTalkers", &UOnlineSubsystemCommonImpl::MaxLocalTalkers)
        .def_readwrite("MaxRemoteTalkers", &UOnlineSubsystemCommonImpl::MaxRemoteTalkers)
        .def_readwrite("GameInterfaceImpl", &UOnlineSubsystemCommonImpl::GameInterfaceImpl)
        .def_readwrite("AuthInterfaceImpl", &UOnlineSubsystemCommonImpl::AuthInterfaceImpl)
        .def("StaticClass", &UOnlineSubsystemCommonImpl::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetRegisteredPlayers", &UOnlineSubsystemCommonImpl::GetRegisteredPlayers)
        .def("IsPlayerInSession", &UOnlineSubsystemCommonImpl::IsPlayerInSession)
        .def("eventGetPlayerNicknameFromIndex", &UOnlineSubsystemCommonImpl::eventGetPlayerNicknameFromIndex)
        .staticmethod("StaticClass")
  ;
}