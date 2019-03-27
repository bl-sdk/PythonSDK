#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ColiseumAllDead(py::module &m)
{
    py::class_< UWillowSeqAct_ColiseumAllDead,  USequenceAction   >(m, "UWillowSeqAct_ColiseumAllDead")
		.def_static("StaticClass", &UWillowSeqAct_ColiseumAllDead::StaticClass, py::return_value_policy::reference)
        .def("eventActivated", &UWillowSeqAct_ColiseumAllDead::eventActivated)
          ;
}