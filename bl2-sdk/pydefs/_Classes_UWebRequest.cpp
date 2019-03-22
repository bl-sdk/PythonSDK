#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWebRequest(py::module &m)
{
    py::class_< UWebRequest,  UObject   >(m, "UWebRequest")
        .def_readwrite("RemoteAddr", &UWebRequest::RemoteAddr)
        .def_readwrite("URI", &UWebRequest::URI)
        .def_readwrite("UserName", &UWebRequest::UserName)
        .def_readwrite("Password", &UWebRequest::Password)
        .def_readwrite("ContentLength", &UWebRequest::ContentLength)
        .def_readwrite("ContentType", &UWebRequest::ContentType)
        .def_readwrite("RequestType", &UWebRequest::RequestType)
        .def_readwrite("HeaderMap", &UWebRequest::HeaderMap)
        .def_readwrite("VariableMap", &UWebRequest::VariableMap)
        .def("StaticClass", &UWebRequest::StaticClass, py::return_value_policy::reference)
        .def("GetHexDigit", &UWebRequest::GetHexDigit)
        .def("DecodeFormData", &UWebRequest::DecodeFormData)
        .def("ProcessHeaderString", &UWebRequest::ProcessHeaderString)
        .def("Dump", &UWebRequest::Dump)
        .def("GetVariables", &UWebRequest::GetVariables)
        .def("GetVariableNumber", &UWebRequest::GetVariableNumber)
        .def("GetVariableCount", &UWebRequest::GetVariableCount)
        .def("GetVariable", &UWebRequest::GetVariable)
        .def("AddVariable", &UWebRequest::AddVariable)
        .def("GetHeaders", &UWebRequest::GetHeaders)
        .def("GetHeader", &UWebRequest::GetHeader)
        .def("AddHeader", &UWebRequest::AddHeader)
        .def("EncodeBase64", &UWebRequest::EncodeBase64)
        .def("DecodeBase64", &UWebRequest::DecodeBase64)
          ;
}