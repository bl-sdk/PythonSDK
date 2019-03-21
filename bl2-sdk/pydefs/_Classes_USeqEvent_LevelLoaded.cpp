#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_LevelLoaded(py::object m)
{
    py::class_< USeqEvent_LevelLoaded,  USequenceEvent   >(m, "USeqEvent_LevelLoaded")
        .def("StaticClass", &USeqEvent_LevelLoaded::StaticClass, py::return_value_policy::reference)
        .def("eventGetObjClassVersion", &USeqEvent_LevelLoaded::eventGetObjClassVersion)
          ;
}