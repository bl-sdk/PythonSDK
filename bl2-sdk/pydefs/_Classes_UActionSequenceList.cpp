#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActionSequenceList()
{
    py::class_< UActionSequenceList,  UActionSequence   >("UActionSequenceList")
        .def_readwrite("CurrentIndex", &UActionSequenceList::CurrentIndex)
        .def("StaticClass", &UActionSequenceList::StaticClass, py::return_value_policy::reference)
        .def("IsActionReadyToFinish", &UActionSequenceList::IsActionReadyToFinish)
        .staticmethod("StaticClass")
  ;
}