#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqVar_PrimaryLocalPlayer(py::module &m)
{
    py::class_< USeqVar_PrimaryLocalPlayer,  USeqVar_Object   >(m, "USeqVar_PrimaryLocalPlayer")
          ;
}