#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMarketingUnlockDefinition(py::module &m)
{
    py::class_< UMarketingUnlockDefinition,  UGBXDefinition   >(m, "UMarketingUnlockDefinition")
		.def_static("StaticClass", &UMarketingUnlockDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("UnlockCode", &UMarketingUnlockDefinition::UnlockCode)
        .def_readwrite("DialogLocFile", &UMarketingUnlockDefinition::DialogLocFile)
        .def_readwrite("DialogLocSection", &UMarketingUnlockDefinition::DialogLocSection)
          ;
}