#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_AddRemoveFaceFXAnimSet(py::module &m)
{
    py::class_< USeqAct_AddRemoveFaceFXAnimSet,  USequenceAction   >(m, "USeqAct_AddRemoveFaceFXAnimSet")
        .def_readwrite("FaceFXAnimSets", &USeqAct_AddRemoveFaceFXAnimSet::FaceFXAnimSets)
          ;
}