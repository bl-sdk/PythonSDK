#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOnlineTitleFileInterface(py::object m)
{
    py::class_< UOnlineTitleFileInterface,  UInterface   >(m, "UOnlineTitleFileInterface")
        .def("StaticClass", &UOnlineTitleFileInterface::StaticClass, py::return_value_policy::reference)
        .def("ClearShareTitleFileCompleteDelegate", &UOnlineTitleFileInterface::ClearShareTitleFileCompleteDelegate)
        .def("AddShareTitleFileCompleteDelegate", &UOnlineTitleFileInterface::AddShareTitleFileCompleteDelegate)
        .def("ShareTitleFile", &UOnlineTitleFileInterface::ShareTitleFile)
        .def("ClearDownloadedFile", &UOnlineTitleFileInterface::ClearDownloadedFile)
        .def("ClearDownloadedFiles", &UOnlineTitleFileInterface::ClearDownloadedFiles)
        .def("GetTitleFileState", &UOnlineTitleFileInterface::GetTitleFileState)
        .def("GetTitleFileContents", &UOnlineTitleFileInterface::GetTitleFileContents)
        .def("ClearReadTitleFileCompleteDelegate", &UOnlineTitleFileInterface::ClearReadTitleFileCompleteDelegate)
        .def("AddReadTitleFileCompleteDelegate", &UOnlineTitleFileInterface::AddReadTitleFileCompleteDelegate)
        .def("ReadTitleFile", &UOnlineTitleFileInterface::ReadTitleFile)
        .def("OnShareTitleFileComplete", &UOnlineTitleFileInterface::OnShareTitleFileComplete)
        .def("OnReadTitleFileComplete", &UOnlineTitleFileInterface::OnReadTitleFileComplete)
          ;
}