#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFacebookIntegration()
{
    class_< UFacebookIntegration, bases< UObject >  , boost::noncopyable>("UFacebookIntegration", no_init)
        .def_readwrite("AppID", &UFacebookIntegration::AppID)
        .def_readwrite("UserName", &UFacebookIntegration::UserName)
        .def_readwrite("UserId", &UFacebookIntegration::UserId)
        .def_readwrite("AccessToken", &UFacebookIntegration::AccessToken)
        .def_readwrite("AuthorizationDelegates", &UFacebookIntegration::AuthorizationDelegates)
        .def_readwrite("FacebookRequestCompleteDelegates", &UFacebookIntegration::FacebookRequestCompleteDelegates)
        .def_readwrite("WebRequestCompleteDelegates", &UFacebookIntegration::WebRequestCompleteDelegates)
        .def("StaticClass", &UFacebookIntegration::StaticClass, return_value_policy< reference_existing_object >())
        .def("ClearWebRequestCompleteDelegate", &UFacebookIntegration::ClearWebRequestCompleteDelegate)
        .def("AddWebRequestCompleteDelegate", &UFacebookIntegration::AddWebRequestCompleteDelegate)
        .def("OnWebRequestComplete", &UFacebookIntegration::OnWebRequestComplete)
        .def("ClearFacebookRequestCompleteDelegate", &UFacebookIntegration::ClearFacebookRequestCompleteDelegate)
        .def("AddFacebookRequestCompleteDelegate", &UFacebookIntegration::AddFacebookRequestCompleteDelegate)
        .def("OnFacebookRequestComplete", &UFacebookIntegration::OnFacebookRequestComplete)
        .def("ClearAuthorizationCompleteDelegate", &UFacebookIntegration::ClearAuthorizationCompleteDelegate)
        .def("AddAuthorizationCompleteDelegate", &UFacebookIntegration::AddAuthorizationCompleteDelegate)
        .def("OnAuthorizationComplete", &UFacebookIntegration::OnAuthorizationComplete)
        .def("eventDisconnect", &UFacebookIntegration::eventDisconnect)
        .def("eventFacebookRequest", &UFacebookIntegration::eventFacebookRequest)
        .def("eventWebRequest", &UFacebookIntegration::eventWebRequest)
        .def("eventIsAuthorized", &UFacebookIntegration::eventIsAuthorized)
        .def("eventAuthorize", &UFacebookIntegration::eventAuthorize)
        .def("eventInit", &UFacebookIntegration::eventInit)
        .staticmethod("StaticClass")
  ;
}