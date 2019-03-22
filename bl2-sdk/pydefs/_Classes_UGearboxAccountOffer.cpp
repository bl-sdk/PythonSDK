#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxAccountOffer(py::module &m)
{
    py::class_< UGearboxAccountOffer,  UObject   >(m, "UGearboxAccountOffer")
        .def_readwrite("TitleEfigs", &UGearboxAccountOffer::TitleEfigs)
        .def_readwrite("DescriptionEfigs", &UGearboxAccountOffer::DescriptionEfigs)
        .def_readwrite("Id", &UGearboxAccountOffer::Id)
        .def_readwrite("DateUnlocked", &UGearboxAccountOffer::DateUnlocked)
          ;
}