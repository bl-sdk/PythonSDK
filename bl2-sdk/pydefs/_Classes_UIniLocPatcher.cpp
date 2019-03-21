#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIniLocPatcher()
{
    py::class_< UIniLocPatcher,  UObject   >("UIniLocPatcher")
        .def_readwrite("Files", &UIniLocPatcher::Files)
        .def_readwrite("TitleFileInterface", &UIniLocPatcher::TitleFileInterface)
        .def_readonly("UnknownData00", &UIniLocPatcher::UnknownData00)
        .def("StaticClass", &UIniLocPatcher::StaticClass, py::return_value_policy::reference)
        .def("UpdateLocFileName", &UIniLocPatcher::UpdateLocFileName)
        .def("ClearCachedFiles", &UIniLocPatcher::ClearCachedFiles)
        .def("ClearReadFileDelegate", &UIniLocPatcher::ClearReadFileDelegate)
        .def("AddReadFileDelegate", &UIniLocPatcher::AddReadFileDelegate)
        .def("AddFileToDownload", &UIniLocPatcher::AddFileToDownload)
        .def("ProcessIniLocFile", &UIniLocPatcher::ProcessIniLocFile)
        .def("OnReadFileComplete", &UIniLocPatcher::OnReadFileComplete)
        .def("DownloadFiles", &UIniLocPatcher::DownloadFiles)
        .def("Init", &UIniLocPatcher::Init)
        .def("OnReadTitleFileComplete", &UIniLocPatcher::OnReadTitleFileComplete)
        .staticmethod("StaticClass")
  ;
}