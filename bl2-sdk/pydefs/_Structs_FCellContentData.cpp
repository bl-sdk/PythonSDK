#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCellContentData()
{
    class_< FCellContentData >("FCellContentData", no_init)
        .def_readwrite("Tex", &FCellContentData::Tex)
        .def_readwrite("Mesh", &FCellContentData::Mesh)
        .def_readwrite("Inv", &FCellContentData::Inv)
        .def_readwrite("ExtArrayIndex", &FCellContentData::ExtArrayIndex)
  ;
}