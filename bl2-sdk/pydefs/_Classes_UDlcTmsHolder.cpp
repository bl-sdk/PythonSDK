#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDlcTmsHolder()
{
    py::class_< UDlcTmsHolder,  UObject   >("UDlcTmsHolder")
        .def_readwrite("PremiumCustomizationList", &UDlcTmsHolder::PremiumCustomizationList)
        .def_readwrite("PremiumClassList", &UDlcTmsHolder::PremiumClassList)
        .def("StaticClass", &UDlcTmsHolder::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}