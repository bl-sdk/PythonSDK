#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FOfferResult(py::object m)
{
    py::class_< FOfferResult >(m, "FOfferResult")
        .def_readwrite("TitleEfigs", &FOfferResult::TitleEfigs)
        .def_readwrite("DescriptionEfigs", &FOfferResult::DescriptionEfigs)
        .def_readwrite("Id", &FOfferResult::Id)
        .def_readwrite("DateUnlocked", &FOfferResult::DateUnlocked)
  ;
}