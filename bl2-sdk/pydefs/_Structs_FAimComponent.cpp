#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAimComponent(py::object m)
{
    py::class_< FAimComponent >(m, "FAimComponent")
        .def_readwrite("BoneName", &FAimComponent::BoneName)
        .def_readwrite("LU", &FAimComponent::LU)
        .def_readwrite("LC", &FAimComponent::LC)
        .def_readwrite("LD", &FAimComponent::LD)
        .def_readwrite("CU", &FAimComponent::CU)
        .def_readwrite("CC", &FAimComponent::CC)
        .def_readwrite("CD", &FAimComponent::CD)
        .def_readwrite("RU", &FAimComponent::RU)
        .def_readwrite("RC", &FAimComponent::RC)
        .def_readwrite("RD", &FAimComponent::RD)
  ;
}