///////////////////////////////////////////////////////////////////////////////
// BSD 3-Clause License
//
// Copyright (c) 2019, Nefelus Inc
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
// * Redistributions of source code must retain the above copyright notice, this
//   list of conditions and the following disclaimer.
//
// * Redistributions in binary form must reproduce the above copyright notice,
//   this list of conditions and the following disclaimer in the documentation
//   and/or other materials provided with the distribution.
//
// * Neither the name of the copyright holder nor the names of its
//   contributors may be used to endorse or promote products derived from
//   this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
// OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef ADS_DCR_ZGUIDB_H
#define ADS_DCR_ZGUIDB_H

#include "IZgui.h"

#ifndef ADS_ZIMPLEMENTS_H
#include "ZImplements.h"
#endif

namespace odb {

class dbBlockSearch;

///
/// ZguiDb - Implementation for ZRoute Zui object interface for Db
///
/// 

class ZguiDb : public ZImplements<ZguiDb, IZgui>
{
private:

	ZPtr<IZdcr> _dcr;
	dbBlockSearch *_blockSearch;

	char *_name;

	char* makeName(const char *name);
	void setGuiContext(void *x, void *blk);

	
public:
	ZguiDb();
	~ZguiDb();
	
	// IZgui Interface
	void setDcr(ZPtr<IZdcr> z);
	char *setName(const char *name);
	char *getName();
	void init(const char *);
	uint getBbox(int *x1, int *y1, int *x2, int *y2);
	void chip_get(ZPtr<IZdcr> dcr);
	void inspect(ZPtr<IZdcr> dcr);

};

} // namespace

#endif
