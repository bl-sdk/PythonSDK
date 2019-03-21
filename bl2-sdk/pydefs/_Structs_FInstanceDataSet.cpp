#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FInstanceDataSet()
{
    class_< FInstanceDataSet >("FInstanceDataSet", no_init)
        .def_readwrite("Data", &FInstanceDataSet::Data)
  ;
}