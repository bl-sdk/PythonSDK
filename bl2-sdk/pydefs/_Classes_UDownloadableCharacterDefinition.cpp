#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDownloadableCharacterDefinition()
{
    class_< UDownloadableCharacterDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UDownloadableCharacterDefinition", no_init)
        .def_readwrite("VfTable_IIDlcLicenseObject", &UDownloadableContentDefinition::VfTable_IIDlcLicenseObject)
        .def_readwrite("PackageDef", &UDownloadableContentDefinition::PackageDef)
        .def_readwrite("ContentId", &UDownloadableContentDefinition::ContentId)
        .def_readwrite("LicenseMask", &UDownloadableContentDefinition::LicenseMask)
        .def_readwrite("ContentDisplayName", &UDownloadableContentDefinition::ContentDisplayName)
        .def("StaticClass", &UDownloadableCharacterDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("CanPlayAs", &UDownloadableCharacterDefinition::CanPlayAs)
        .def("GetFullContentId", &UDownloadableContentDefinition::GetFullContentId)
        .def("CanConsume", &UDownloadableContentDefinition::CanConsume)
        .def("IsInstalled", &UDownloadableContentDefinition::IsInstalled)
        .def("IsLicensed", &UDownloadableContentDefinition::IsLicensed)
        .staticmethod("StaticClass")
  ;
}