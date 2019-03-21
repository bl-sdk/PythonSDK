#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTargetIterator()
{
    py::class_< UTargetIterator,  UObject   >("UTargetIterator")
        .def_readwrite("IteratorType", &UTargetIterator::IteratorType)
        .def_readwrite("BarGraphShortName", &UTargetIterator::BarGraphShortName)
        .def("StaticClass", &UTargetIterator::StaticClass, py::return_value_policy::reference)
        .def("eventRecordEvalCallback", &UTargetIterator::eventRecordEvalCallback)
        .staticmethod("StaticClass")
  ;
}