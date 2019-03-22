#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_Destroy(py::module &m)
{
    py::class_< USeqAct_Destroy,  USequenceAction   >(m, "USeqAct_Destroy")
        .def_readwrite("IgnoreBasedClasses", &USeqAct_Destroy::IgnoreBasedClasses)
        .def("StaticClass", &USeqAct_Destroy::StaticClass, py::return_value_policy::reference)
          ;
}