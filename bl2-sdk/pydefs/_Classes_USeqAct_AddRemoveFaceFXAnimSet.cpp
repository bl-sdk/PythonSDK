#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_AddRemoveFaceFXAnimSet()
{
    py::class_< USeqAct_AddRemoveFaceFXAnimSet,  USequenceAction   >("USeqAct_AddRemoveFaceFXAnimSet")
        .def_readwrite("FaceFXAnimSets", &USeqAct_AddRemoveFaceFXAnimSet::FaceFXAnimSets)
        .def("StaticClass", &USeqAct_AddRemoveFaceFXAnimSet::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}