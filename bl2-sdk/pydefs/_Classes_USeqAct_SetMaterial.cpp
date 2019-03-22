#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_SetMaterial(py::module &m)
{
    py::class_< USeqAct_SetMaterial,  USequenceAction   >(m, "USeqAct_SetMaterial")
        .def_readwrite("NewMaterial", &USeqAct_SetMaterial::NewMaterial)
        .def_readwrite("MaterialIndex", &USeqAct_SetMaterial::MaterialIndex)
          ;
}