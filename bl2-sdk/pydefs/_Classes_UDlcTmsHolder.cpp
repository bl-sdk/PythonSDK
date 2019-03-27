#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDlcTmsHolder(py::module &m)
{
    py::class_< UDlcTmsHolder,  UObject   >(m, "UDlcTmsHolder")
		.def_static("StaticClass", &UDlcTmsHolder::StaticClass, py::return_value_policy::reference)
        .def_readwrite("PremiumCustomizationList", &UDlcTmsHolder::PremiumCustomizationList)
        .def_readwrite("PremiumClassList", &UDlcTmsHolder::PremiumClassList)
          ;
}