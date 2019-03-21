#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDownloadableContentDefinition()
{
    class_< UDownloadableContentDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UDownloadableContentDefinition", no_init)
        .def_readwrite("VfTable_IIDlcLicenseObject", &UDownloadableContentDefinition::VfTable_IIDlcLicenseObject)
        .def_readwrite("PackageDef", &UDownloadableContentDefinition::PackageDef)
        .def_readwrite("ContentId", &UDownloadableContentDefinition::ContentId)
        .def_readwrite("LicenseMask", &UDownloadableContentDefinition::LicenseMask)
        .def_readwrite("ContentDisplayName", &UDownloadableContentDefinition::ContentDisplayName)
        .def("StaticClass", &UDownloadableContentDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetFullContentId", &UDownloadableContentDefinition::GetFullContentId)
        .def("CanConsume", &UDownloadableContentDefinition::CanConsume)
        .def("IsInstalled", &UDownloadableContentDefinition::IsInstalled)
        .def("IsLicensed", &UDownloadableContentDefinition::IsLicensed)
        .staticmethod("StaticClass")
  ;
}