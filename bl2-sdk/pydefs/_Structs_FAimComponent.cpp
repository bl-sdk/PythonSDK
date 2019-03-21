#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAimComponent()
{
    py::class_< FAimComponent >("FAimComponent")
        .def_readwrite("BoneName", &FAimComponent::BoneName)
        .def_readonly("UnknownData00", &FAimComponent::UnknownData00)
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