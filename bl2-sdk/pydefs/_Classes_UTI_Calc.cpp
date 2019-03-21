#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTI_Calc()
{
    py::class_< UTI_Calc,  UObject   >("UTI_Calc")
        .def_readwrite("IteratorType", &UTargetIterator::IteratorType)
        .def_readwrite("BarGraphShortName", &UTargetIterator::BarGraphShortName)
        .def("StaticClass", &UTI_Calc::StaticClass, py::return_value_policy::reference)
        .def("eventRecordEvalCallback", &UTargetIterator::eventRecordEvalCallback)
        .staticmethod("StaticClass")
  ;
}