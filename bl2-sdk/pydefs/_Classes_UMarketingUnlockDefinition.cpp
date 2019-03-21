#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMarketingUnlockDefinition()
{
    py::class_< UMarketingUnlockDefinition,  UGBXDefinition   >("UMarketingUnlockDefinition")
        .def_readwrite("UnlockCode", &UMarketingUnlockDefinition::UnlockCode)
        .def_readwrite("DialogLocFile", &UMarketingUnlockDefinition::DialogLocFile)
        .def_readwrite("DialogLocSection", &UMarketingUnlockDefinition::DialogLocSection)
        .def("StaticClass", &UMarketingUnlockDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}