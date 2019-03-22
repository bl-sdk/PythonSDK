#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTargetIterator(py::module &m)
{
    py::class_< UTargetIterator,  UObject   >(m, "UTargetIterator")
        .def_readwrite("IteratorType", &UTargetIterator::IteratorType)
        .def_readwrite("BarGraphShortName", &UTargetIterator::BarGraphShortName)
        .def("StaticClass", &UTargetIterator::StaticClass, py::return_value_policy::reference)
        .def("eventRecordEvalCallback", &UTargetIterator::eventRecordEvalCallback)
          ;
}