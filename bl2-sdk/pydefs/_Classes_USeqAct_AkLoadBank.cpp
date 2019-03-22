#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_AkLoadBank(py::module &m)
{
    py::class_< USeqAct_AkLoadBank,  USeqAct_Latent   >(m, "USeqAct_AkLoadBank")
          ;
}