#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFacebookIntegration(py::module &m)
{
    py::class_< UFacebookIntegration,  UObject   >(m, "UFacebookIntegration")
		.def_static("StaticClass", &UFacebookIntegration::StaticClass, py::return_value_policy::reference)
        .def_readwrite("AppID", &UFacebookIntegration::AppID)
        .def_readwrite("UserName", &UFacebookIntegration::UserName)
        .def_readwrite("UserId", &UFacebookIntegration::UserId)
        .def_readwrite("AccessToken", &UFacebookIntegration::AccessToken)
        .def_readwrite("AuthorizationDelegates", &UFacebookIntegration::AuthorizationDelegates)
        .def_readwrite("FacebookRequestCompleteDelegates", &UFacebookIntegration::FacebookRequestCompleteDelegates)
        .def_readwrite("WebRequestCompleteDelegates", &UFacebookIntegration::WebRequestCompleteDelegates)
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
          ;
}