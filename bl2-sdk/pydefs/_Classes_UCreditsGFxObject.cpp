#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCreditsGFxObject(py::module &m)
{
    py::class_< UCreditsGFxObject,  UGFxObject   >(m, "UCreditsGFxObject")
		.def_static("StaticClass", &UCreditsGFxObject::StaticClass, py::return_value_policy::reference)
        .def_readwrite("CreditsDef", &UCreditsGFxObject::CreditsDef)
        .def_readwrite("CachedDelta", &UCreditsGFxObject::CachedDelta)
        .def("UpdateDelta", &UCreditsGFxObject::UpdateDelta)
        .def("StartCreditScroll", &UCreditsGFxObject::StartCreditScroll)
        .def("Init", &UCreditsGFxObject::Init)
          ;
}