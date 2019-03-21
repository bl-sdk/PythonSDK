#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOnlineCommunityContentInterface()
{
    py::class_< UOnlineCommunityContentInterface,  UInterface   >("UOnlineCommunityContentInterface")
        .def("StaticClass", &UOnlineCommunityContentInterface::StaticClass, py::return_value_policy::reference)
        .def("RateContent", &UOnlineCommunityContentInterface::RateContent)
        .def("ClearGetContentPayloadCompleteDelegate", &UOnlineCommunityContentInterface::ClearGetContentPayloadCompleteDelegate)
        .def("AddGetContentPayloadCompleteDelegate", &UOnlineCommunityContentInterface::AddGetContentPayloadCompleteDelegate)
        .def("OnGetContentPayloadComplete", &UOnlineCommunityContentInterface::OnGetContentPayloadComplete)
        .def("GetContentPayload", &UOnlineCommunityContentInterface::GetContentPayload)
        .def("ClearDownloadContentCompleteDelegate", &UOnlineCommunityContentInterface::ClearDownloadContentCompleteDelegate)
        .def("AddDownloadContentCompleteDelegate", &UOnlineCommunityContentInterface::AddDownloadContentCompleteDelegate)
        .def("OnDownloadContentComplete", &UOnlineCommunityContentInterface::OnDownloadContentComplete)
        .def("DownloadContent", &UOnlineCommunityContentInterface::DownloadContent)
        .def("ClearUploadContentCompleteDelegate", &UOnlineCommunityContentInterface::ClearUploadContentCompleteDelegate)
        .def("AddUploadContentCompleteDelegate", &UOnlineCommunityContentInterface::AddUploadContentCompleteDelegate)
        .def("OnUploadContentComplete", &UOnlineCommunityContentInterface::OnUploadContentComplete)
        .def("UploadContent", &UOnlineCommunityContentInterface::UploadContent)
        .def("GetFriendsContentList", &UOnlineCommunityContentInterface::GetFriendsContentList)
        .def("ClearReadFriendsContentListCompleteDelegate", &UOnlineCommunityContentInterface::ClearReadFriendsContentListCompleteDelegate)
        .def("AddReadFriendsContentListCompleteDelegate", &UOnlineCommunityContentInterface::AddReadFriendsContentListCompleteDelegate)
        .def("OnReadFriendsContentListComplete", &UOnlineCommunityContentInterface::OnReadFriendsContentListComplete)
        .def("ReadFriendsContentList", &UOnlineCommunityContentInterface::ReadFriendsContentList)
        .def("GetContentList", &UOnlineCommunityContentInterface::GetContentList)
        .def("ClearReadContentListCompleteDelegate", &UOnlineCommunityContentInterface::ClearReadContentListCompleteDelegate)
        .def("AddReadContentListCompleteDelegate", &UOnlineCommunityContentInterface::AddReadContentListCompleteDelegate)
        .def("OnReadContentListComplete", &UOnlineCommunityContentInterface::OnReadContentListComplete)
        .def("ReadContentList", &UOnlineCommunityContentInterface::ReadContentList)
        .def("Exit", &UOnlineCommunityContentInterface::Exit)
        .def("Init", &UOnlineCommunityContentInterface::Init)
        .staticmethod("StaticClass")
  ;
}