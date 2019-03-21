#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FReflectionInfo()
{
    class_< FReflectionInfo >("FReflectionInfo", no_init)
        .def_readwrite("ReflectionType", &FReflectionInfo::ReflectionType)
        .def_readwrite("ReflectedDamageScale", &FReflectionInfo::ReflectedDamageScale)
        .def_readwrite("ReflectedDamageToReflector", &FReflectionInfo::ReflectedDamageToReflector)
        .def_readwrite("ReflectedInaccuracyModifier", &FReflectionInfo::ReflectedInaccuracyModifier)
  ;
}