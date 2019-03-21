#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOnlineTitleFileDownloadMcp()
{
    py::class_< UOnlineTitleFileDownloadMcp,  UObject   >("UOnlineTitleFileDownloadMcp")
        .def_readwrite("ReadTitleFileCompleteDelegates", &UOnlineTitleFileDownloadMcp::ReadTitleFileCompleteDelegates)
        .def_readwrite("TitleFiles", &UOnlineTitleFileDownloadMcp::TitleFiles)
        .def_readwrite("DownloadCount", &UOnlineTitleFileDownloadMcp::DownloadCount)
        .def_readwrite("BaseUrl", &UOnlineTitleFileDownloadMcp::BaseUrl)
        .def_readwrite("TimeOut", &UOnlineTitleFileDownloadMcp::TimeOut)
        .def_readwrite("FilesToUrls", &UOnlineTitleFileDownloadMcp::FilesToUrls)
        .def_readwrite("VfTable_FTickableObject", &UMCPBase::VfTable_FTickableObject)
        .def("StaticClass", &UOnlineTitleFileDownloadMcp::StaticClass, py::return_value_policy::reference)
        .def("ClearShareTitleFileCompleteDelegate", &UOnlineTitleFileDownloadMcp::ClearShareTitleFileCompleteDelegate)
        .def("AddShareTitleFileCompleteDelegate", &UOnlineTitleFileDownloadMcp::AddShareTitleFileCompleteDelegate)
        .def("ShareTitleFile", &UOnlineTitleFileDownloadMcp::ShareTitleFile)
        .def("ClearDownloadedFile", &UOnlineTitleFileDownloadMcp::ClearDownloadedFile)
        .def("ClearDownloadedFiles", &UOnlineTitleFileDownloadMcp::ClearDownloadedFiles)
        .def("GetTitleFileState", &UOnlineTitleFileDownloadMcp::GetTitleFileState)
        .def("GetTitleFileContents", &UOnlineTitleFileDownloadMcp::GetTitleFileContents)
        .def("ClearReadTitleFileCompleteDelegate", &UOnlineTitleFileDownloadMcp::ClearReadTitleFileCompleteDelegate)
        .def("AddReadTitleFileCompleteDelegate", &UOnlineTitleFileDownloadMcp::AddReadTitleFileCompleteDelegate)
        .def("ReadTitleFile", &UOnlineTitleFileDownloadMcp::ReadTitleFile)
        .def("OnShareTitleFileComplete", &UOnlineTitleFileDownloadMcp::OnShareTitleFileComplete)
        .def("OnReadTitleFileComplete", &UOnlineTitleFileDownloadMcp::OnReadTitleFileComplete)
        .staticmethod("StaticClass")
  ;
}