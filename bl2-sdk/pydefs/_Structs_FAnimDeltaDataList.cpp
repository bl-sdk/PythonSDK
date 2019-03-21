#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAnimDeltaDataList()
{
    class_< FAnimDeltaDataList >("FAnimDeltaDataList", no_init)
        .def_readwrite("IndexList", &FAnimDeltaDataList::IndexList)
  ;
}