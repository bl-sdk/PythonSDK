#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UOnlineTitleFileInterface()
{
    class_< UOnlineTitleFileInterface, bases< UInterface >  , boost::noncopyable>("UOnlineTitleFileInterface", no_init)
        .def("StaticClass", &UOnlineTitleFileInterface::StaticClass, return_value_policy< reference_existing_object >())
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
        .staticmethod("StaticClass")
  ;
}