#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCreditsGFxObject(py::object m)
{
    py::class_< UCreditsGFxObject,  UGFxObject   >(m, "UCreditsGFxObject")
        .def_readwrite("CreditsDef", &UCreditsGFxObject::CreditsDef)
        .def_readwrite("CachedDelta", &UCreditsGFxObject::CachedDelta)
        .def("StaticClass", &UCreditsGFxObject::StaticClass, py::return_value_policy::reference)
        .def("UpdateDelta", &UCreditsGFxObject::UpdateDelta)
        .def("StartCreditScroll", &UCreditsGFxObject::StartCreditScroll)
        .def("Init", &UCreditsGFxObject::Init)
          ;
}