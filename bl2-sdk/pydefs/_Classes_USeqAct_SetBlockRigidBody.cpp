#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_SetBlockRigidBody(py::module &m)
{
    py::class_< USeqAct_SetBlockRigidBody,  USequenceAction   >(m, "USeqAct_SetBlockRigidBody")
          ;
}