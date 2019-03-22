#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UEridiumValueGFxObject(py::module &m)
{
    py::class_< UEridiumValueGFxObject,  UValueGFxObject   >(m, "UEridiumValueGFxObject")
        .def_readwrite("CurrencyFrames", &UEridiumValueGFxObject::CurrencyFrames)
        .def("SetCurrencyClip", &UEridiumValueGFxObject::SetCurrencyClip)
        .def("SetCurrencyFrame", &UEridiumValueGFxObject::SetCurrencyFrame)
        .def("SetCurrencyType", &UEridiumValueGFxObject::SetCurrencyType)
        .def("SetValue", &UEridiumValueGFxObject::SetValue)
          ;
}