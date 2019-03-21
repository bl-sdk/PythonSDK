#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxAccountOffer()
{
    py::class_< UGearboxAccountOffer,  UObject   >("UGearboxAccountOffer")
        .def_readwrite("TitleEfigs", &UGearboxAccountOffer::TitleEfigs)
        .def_readwrite("DescriptionEfigs", &UGearboxAccountOffer::DescriptionEfigs)
        .def_readwrite("Id", &UGearboxAccountOffer::Id)
        .def_readwrite("DateUnlocked", &UGearboxAccountOffer::DateUnlocked)
        .def("StaticClass", &UGearboxAccountOffer::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}