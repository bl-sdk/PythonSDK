#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWebResponse(py::module &m)
{
    py::class_< UWebResponse,  UObject   >(m, "UWebResponse")
		.def_static("StaticClass", &UWebResponse::StaticClass, py::return_value_policy::reference)
        .def_readwrite("headers", &UWebResponse::headers)
        .def_readwrite("ReplacementMap", &UWebResponse::ReplacementMap)
        .def_readwrite("IncludePath", &UWebResponse::IncludePath)
        .def_readwrite("CharSet", &UWebResponse::CharSet)
        .def_readwrite("Connection", &UWebResponse::Connection)
        .def("SentResponse", &UWebResponse::SentResponse)
        .def("SentText", &UWebResponse::SentText)
        .def("Redirect", &UWebResponse::Redirect)
        .def("SendStandardHeaders", &UWebResponse::SendStandardHeaders)
        .def("HTTPError", &UWebResponse::HTTPError)
        .def("SendHeaders", &UWebResponse::SendHeaders)
        .def("AddHeader", &UWebResponse::AddHeader)
        .def("HTTPHeader", &UWebResponse::HTTPHeader)
        .def("HTTPResponse", &UWebResponse::HTTPResponse)
        .def("FailAuthentication", &UWebResponse::FailAuthentication)
        .def("SendCachedFile", &UWebResponse::SendCachedFile)
        .def("eventSendBinary", &UWebResponse::eventSendBinary)
        .def("eventSendText", &UWebResponse::eventSendText)
        .def("Dump", &UWebResponse::Dump)
        .def("GetHTTPExpiration", &UWebResponse::GetHTTPExpiration)
        .def("LoadParsedUHTM", &UWebResponse::LoadParsedUHTM)
        .def("IncludeBinaryFile", &UWebResponse::IncludeBinaryFile)
        .def("IncludeUHTM", &UWebResponse::IncludeUHTM)
        .def("ClearSubst", &UWebResponse::ClearSubst)
        .def("Subst", &UWebResponse::Subst)
        .def("FileExists", &UWebResponse::FileExists)
          ;
}