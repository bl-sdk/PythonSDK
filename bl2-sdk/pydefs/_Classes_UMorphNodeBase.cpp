#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMorphNodeBase(py::module &m)
{
    py::class_< UMorphNodeBase,  UAnimObject   >(m, "UMorphNodeBase")
        .def_readwrite("NodeName", &UMorphNodeBase::NodeName)
          ;
}