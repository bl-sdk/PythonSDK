#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDownloadablePackageDefinition(py::module &m)
{
    py::class_< UDownloadablePackageDefinition,  UGBXDefinition   >(m, "UDownloadablePackageDefinition")
        .def_readwrite("VfTable_IIDlcLicenseObject", &UDownloadablePackageDefinition::VfTable_IIDlcLicenseObject)
        .def_readwrite("PackageId", &UDownloadablePackageDefinition::PackageId)
        .def_readwrite("PackageMask", &UDownloadablePackageDefinition::PackageMask)
        .def_readwrite("PackageDisplayName", &UDownloadablePackageDefinition::PackageDisplayName)
        .def_readwrite("DLCName", &UDownloadablePackageDefinition::DLCName)
        .def_readwrite("SeasonPassId", &UDownloadablePackageDefinition::SeasonPassId)
        .def_readwrite("LicenseItems", &UDownloadablePackageDefinition::LicenseItems)
        .def_readwrite("bUsesExtendedLicensing", &UDownloadablePackageDefinition::bUsesExtendedLicensing)
        .def_readwrite("AppliedLicense", &UDownloadablePackageDefinition::AppliedLicense)
        .def("StaticClass", &UDownloadablePackageDefinition::StaticClass, py::return_value_policy::reference)
        .def("IsFullyInstalled", &UDownloadablePackageDefinition::IsFullyInstalled)
        .def("IsFullyLicensed", &UDownloadablePackageDefinition::IsFullyLicensed)
        .def("GetContentDefinitionById", &UDownloadablePackageDefinition::GetContentDefinitionById, py::return_value_policy::reference)
          ;
}