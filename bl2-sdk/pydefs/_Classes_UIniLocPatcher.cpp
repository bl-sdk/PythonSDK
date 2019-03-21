#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIniLocPatcher()
{
    class_< UIniLocPatcher, bases< UObject >  , boost::noncopyable>("UIniLocPatcher", no_init)
        .def_readwrite("Files", &UIniLocPatcher::Files)
        .def_readwrite("TitleFileInterface", &UIniLocPatcher::TitleFileInterface)
        .def_readonly("UnknownData00", &UIniLocPatcher::UnknownData00)
        .def("StaticClass", &UIniLocPatcher::StaticClass, return_value_policy< reference_existing_object >())
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