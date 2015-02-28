

function Name(){
	//	true : minimal
	//	null : potential
	this._structuralComponents = {
		name : {
			pre   : null,
			start : true,
			opt_m : null,
			end   : true,
			opt_e : null,
			opt_f : null
		},
		title : {
			link : true;
			title: [
				{
					adj  : null,
					noun : true,
				},
				{	
					adv  : null,
					noun : true
				}
			]
		}
		home : true
		
	}

	this.structureCode = '';
	this.structureBinary = 0;
	this.occupation = '';
	this.name = '';
};

Name.prototype = {
	
	createName : function(name, occupation){
		this._generateStructure();
	},
	
	_generateStructure : function()
	{
		for(var i in this._structuralComponents['name']) {
			if(this._structuralComponents['name'][i] == true){
				this.structureCode += '1';
			} else if (this._structuralComponents['name'][i] == null) {
				this.structureCode += Math.floor(Math.random() *  2); // 0.0 - 2.0
			} 
		}
		this.structureBinary = this.structure.toString(2);
	}
};

//	Inputs
var name_in
,	occupation_in
,	submit;

//	Values
var name_val
,	occupation_val;

var occupations = {
	philosopher	: {},
	warrior		: {},
	poet		: {},
	buffoon		: {},
	lord		: {}
};
	
var links = {
	1 : 'the',
	2 : 'he who',
	3 : 'she that',
	5 : 's'
};



var adj = {
	1 : ''
};

occupations['philosopher'] = {
	start: ['Ar', 'Phil', 'Ap', 'Am', 'The', 'Dem', 'An', 'So']
	opt_m: ['ist', 'oll', 'ad', 'is', 'om', 'et', ],
	opt_e: ['ox', 'et'],
	opt_f: ['then', 'ri' ,'e'],
	end	 : ['us','ed','des', 'oax'],
	link : ['the'],
	adj	 : ['dubious', 'doubtful', 'master', 'wise', 'loving', 'terrible', 'couragous', 'contemplative', 'revered', 'patient', 'noble', 'kind', 'respectable', 'rightous'],
	adj_title: ['skeptic', 'cynic', 'stoic', 'sophist']
}

window.onload = init;

function init() {
	name_in 	  = document.getElementById('name');
	occupation_in = document.getElementsByName('occuption');
	submit 		  = document.getElementById('btn-generate');
	
	submit.addEventListener('click', function(e){
		console.log('button click');
	});
	
	var name = new Name();
	name.createName('nick', 'philospher');
} 

function _getInputs() {
	//	Set Name
	name_val = name_in.attr('value');
	
	//	Set Occupation
	for(var i=0; i<occupation_in.length; i++) {
		if(occupation_in[i].checked){
			 occupations_val[i];
		}
	}
}

function generateName() {
	_getInputs();
	
	
}










