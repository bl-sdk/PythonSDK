#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAnimInfo()
{
    class_< FAnimInfo >("FAnimInfo", no_init)
        .def_readwrite("AnimSeqName", &FAnimInfo::AnimSeqName)
        .def_readwrite("AnimSeq", &FAnimInfo::AnimSeq)
        .def_readwrite("AnimLinkupIndex", &FAnimInfo::AnimLinkupIndex)
  ;
}