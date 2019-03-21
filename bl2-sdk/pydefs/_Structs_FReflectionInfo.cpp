#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FReflectionInfo(py::object m)
{
    py::class_< FReflectionInfo >(m, "FReflectionInfo")
        .def_readwrite("ReflectionType", &FReflectionInfo::ReflectionType)
        .def_readwrite("ReflectedDamageScale", &FReflectionInfo::ReflectedDamageScale)
        .def_readwrite("ReflectedDamageToReflector", &FReflectionInfo::ReflectedDamageToReflector)
        .def_readwrite("ReflectedInaccuracyModifier", &FReflectionInfo::ReflectedInaccuracyModifier)
  ;
}