#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDownloadableCharacterDefinition(py::module &m)
{
    py::class_< UDownloadableCharacterDefinition,  UGBXDefinition   >(m, "UDownloadableCharacterDefinition")
        .def_readwrite("VfTable_IIDlcLicenseObject", &UDownloadableContentDefinition::VfTable_IIDlcLicenseObject)
        .def_readwrite("PackageDef", &UDownloadableContentDefinition::PackageDef)
        .def_readwrite("ContentId", &UDownloadableContentDefinition::ContentId)
        .def_readwrite("LicenseMask", &UDownloadableContentDefinition::LicenseMask)
        .def_readwrite("ContentDisplayName", &UDownloadableContentDefinition::ContentDisplayName)
        .def("CanPlayAs", &UDownloadableCharacterDefinition::CanPlayAs)
        .def("GetFullContentId", &UDownloadableContentDefinition::GetFullContentId)
        .def("CanConsume", &UDownloadableContentDefinition::CanConsume)
        .def("IsInstalled", &UDownloadableContentDefinition::IsInstalled)
        .def("IsLicensed", &UDownloadableContentDefinition::IsLicensed)
          ;
}