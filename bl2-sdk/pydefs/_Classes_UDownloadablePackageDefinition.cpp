#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDownloadablePackageDefinition()
{
    class_< UDownloadablePackageDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UDownloadablePackageDefinition", no_init)
        .def_readwrite("VfTable_IIDlcLicenseObject", &UDownloadablePackageDefinition::VfTable_IIDlcLicenseObject)
        .def_readwrite("PackageId", &UDownloadablePackageDefinition::PackageId)
        .def_readwrite("PackageMask", &UDownloadablePackageDefinition::PackageMask)
        .def_readwrite("PackageDisplayName", &UDownloadablePackageDefinition::PackageDisplayName)
        .def_readwrite("DLCName", &UDownloadablePackageDefinition::DLCName)
        .def_readwrite("SeasonPassId", &UDownloadablePackageDefinition::SeasonPassId)
        .def_readwrite("LicenseItems", &UDownloadablePackageDefinition::LicenseItems)
        .def_readwrite("bUsesExtendedLicensing", &UDownloadablePackageDefinition::bUsesExtendedLicensing)
        .def_readwrite("AppliedLicense", &UDownloadablePackageDefinition::AppliedLicense)
        .def("StaticClass", &UDownloadablePackageDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("IsFullyInstalled", &UDownloadablePackageDefinition::IsFullyInstalled)
        .def("IsFullyLicensed", &UDownloadablePackageDefinition::IsFullyLicensed)
        .def("GetContentDefinitionById", &UDownloadablePackageDefinition::GetContentDefinitionById, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}